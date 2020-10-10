# q_engine

## build system
* cmake

## reflection
* lex & yacc
* serialize in .ini

## serialize
* ecs memory dump
* type layout check with md5, layout serialize in .ini
* value check with dirty layout

## hot reload
* code with dll, see https://ourmachinery.com/post/dll-hot-reloading-in-theory-and-practice/
* memory with type layout check with md5

## parallel
* stm for logic
* task graph for cpu computing work
* data parallel for gpu computing work (but implementing in cpu for soft rasterization)
* alt and edl for io

## shader code
* write in c and translate to back end gpu for soft rasterization

## gpu back end
* vulkan
* MoltenVK

## config
* .ini

## ui
* mvvm like vue

## platform
* sdl 
* sdl_image
* sdl_mixer
* sdl_net
* sdl_ttf
* sdl_rtf








