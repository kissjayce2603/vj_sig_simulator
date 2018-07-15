- “中国的梦” additional program for sync with VJ contents

1. Add the "myDevices" class to src folder
2. Add "setup()" "update()" "draw()" to each part form oF(v0.10.0)

- Default OSC PORT: 110110
```
// Just set how many diveces.
setup(int numOfWidthDiveces, int numOfHeightDiveces);

// Place to ofapp::update().
update();

// show demo simulation how it working, dont need init this for real performance.
drawSimulator(int pos_x, int pos_y)

// show the data. aug can place you want in the screen.
drawLog(int pos_x, int pos_y)
```
