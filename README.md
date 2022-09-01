# ServoEasingSubclassTest

This is a demo/test "library" built while trying to get my head around the `#include <ServoEasing.hpp>` [approach](https://github.com/ArminJo/ServoEasing#why-hpp-instead-of-cpp) used by the [ServoEasing library](https://github.com/ArminJo/ServoEasing) since [v2.4](https://github.com/ArminJo/ServoEasing/releases/tag/v2.4.0). For my application, I wanted to subclass ServoEasing, which quickly leads to a pile of compiler errors about duplicate definitions.

The ServoEasing docs suggest:

> the line `#include <ServoEasing.h>` must be changed to `#include <ServoEasing.hpp>` in your main program (aka *.ino file with setup() and loop()).

From my testing here, it seems that line _is_ needed, even if previously it was sufficient to include the subclass library. You can't `#include <ServoEasing.hpp>` in your `subclass.h`.

Even here, a warning is still generated unless I `#define SUPPRESS_HPP_WARNING` in the subclass.

## How to use this

There's nothing much to use here, but if you want to compile it yourself and check that it works: clone this repo into your Arduino libraries folder (on a Mac: `~/Documents/Arduino/libraries/`), restart the Arduino IDE, then open  ServoSubclassTest.ino from the Examples menu under File.

Compile, and (if you really want) flash to a device. Open the serial monitor to receive the stunning output:

```
Starting...
0
128
```

Woohoo!

## Is there a better way?

Maybe. I haven't found a combination that works. If you do, please log an issue on this repo!
