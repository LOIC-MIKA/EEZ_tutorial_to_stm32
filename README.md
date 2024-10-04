# EEZ_tutorial_to_stm32
Use EEZ-STDIO to design the LVGL interface for STM32
Here's a statement about all the way up to codeblock
### 事件

#### EEZ文件生成错误

关于eez生成的error: 'LV_SCR_LOAD_ANIM_FADE_IN' undeclared (first use in this function); did you mean 'LV_SCR_LOAD_ANIM_FADE_ON'?|错误

这是一个关于动画效果的枚举，以下是介绍

在 LVGL 中，`lv_scr_load_anim_t` 是一个枚举类型，用于定义屏幕加载时的动画效果。以下是每个枚举值的简要介绍：

##### 枚举类型介绍

1. `LV_SCR_LOAD_ANIM_NONE`

- **描述**：不使用任何动画效果。屏幕直接切换到新的内容，没有过渡效果。

2. `LV_SCR_LOAD_ANIM_OVER_LEFT`

- **描述**：新的屏幕从左侧滑入，旧的屏幕向右侧滑出。这个效果给人一种新的内容从左侧进入的感觉。

3. `LV_SCR_LOAD_ANIM_OVER_RIGHT`

- **描述**：新的屏幕从右侧滑入，旧的屏幕向左侧滑出。这个效果与 `OVER_LEFT` 相反，新的内容从右侧进入。

4. `LV_SCR_LOAD_ANIM_OVER_TOP`

- **描述**：新的屏幕从顶部滑入，旧的屏幕向底部滑出。这个效果使得新的内容从上方进入。

5. `LV_SCR_LOAD_ANIM_OVER_BOTTOM`

- **描述**：新的屏幕从底部滑入，旧的屏幕向顶部滑出。这个效果使得新的内容从下方进入。

6. `LV_SCR_LOAD_ANIM_MOVE_LEFT`

- **描述**：新的屏幕向左移动，旧的屏幕也向左移动。这个效果给人一种内容平移的感觉。

7. `LV_SCR_LOAD_ANIM_MOVE_RIGHT`

- **描述**：新的屏幕向右移动，旧的屏幕也向右移动。与 `MOVE_LEFT` 相反，内容向右平移。

8. `LV_SCR_LOAD_ANIM_MOVE_TOP`

- **描述**：新的屏幕向上移动，旧的屏幕也向上移动。这个效果使内容向上平移。

9. `LV_SCR_LOAD_ANIM_MOVE_BOTTOM`

- **描述**：新的屏幕向下移动，旧的屏幕也向下移动。内容向下平移的效果。

10. `LV_SCR_LOAD_ANIM_FADE_ON`

- **描述**：新的屏幕逐渐淡入，旧的屏幕逐渐淡出。这个效果使得内容切换更加平滑，适合需要柔和过渡的场景。

#### 壁纸（paper）

点击(CLICKED)将main页的键盘隐藏，注意要开启eez中的clickable选项，不然事件无法生效

#### 文本区域（user&password）

聚焦(FOCUSER)将main页键盘显示出来

#### 复选框（checkbox->remember me）

当值改变(VALUE_CHANGED)的时候进行页面跳转(v1.00)

#### BUTTON(main->SIGN_IN)

当按下(PRESSED)的时候进行页面切换

以下是源music（含flow）文件需要修改的地方,目前用user变量进行代替（在最新的文件中使用结构体数组来存放testarea的数据，然后用strcmp和宏定义进行比较）

以下是music源flow中使用action进行比较表达式，在最新的music_noflow中无法使用

| Clickable | user == "mikusong"&&password == "111111"    |
| :-------: | ------------------------------------------- |
| Disabled  | user != "mikussong"\|\|password != "111111" |

##### 界面的切换

界面的切换并没有很复杂，只要调用loadScreen(SCREEN_ID_MAIN);这个函数即可，实参为以下枚举

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_MUSIC = 2,
};

最常用到的就是用按钮来切换，在这里不做介绍

#### Arc(valume_arc)

聚焦(FOCUSER),添加事件，待用

BUTTON(0)添加CHECKED事件,不显示valume_arc

BUTTON(0)添加UNCHECKED事件,显示valume_arc

#### LIST_SHOW

CHECKED,不显示list

UNCHECKED,显示list

#### 函数get_var_user等未声明问题

EEZ_studio大部分组件是为了flow而设计的，在变量一栏的，因为没有flow，因此需要自创一个文件来写设置变量和修改变量的操作

