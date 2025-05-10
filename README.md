#  Computer Graphic's Algorithms 🎨

The digital playground where I battled coordinate systems and won! ✨✨

This collection documents my journey from "why isn't this line showing up" to "check out this fancy curve algorithm I implemented on the **blue screen of death** 💀 (iykyk)."

## What's Inside

### Line Algorithms ✏️
`Bresenham Normal line`, `Bresenham Thick Line`, `Bresenham Dashed line`, `DDA basic line`, `DDA dotted line`, `Liang Barsky's Line Clipping Algorithm`

Different ways to connect two points that caused me way more headaches than they should have. Trust me, line drawing is never as simple as it sounds.

### Curves & Circles 🔄
`Beizer Curve`, `Koch Curve`, `Mid-point Circle`, `Mid-point Circle (Concentric)`, `Mid-point Ellipse`

The algorithms that finally let me draw something other than straight lines. That feeling when your first circle actually looks round!

### Fill Techniques 🪣
`Boundary Fill`, `Flood Fill`

For when outlines just aren't enough and you need to add some color to your life.

### Character Generation 📝
`Character Generation (Bit-Map Method)`, `Character Generation (Stroke Method)`

Two different approaches to putting text on screen - from the days before we could just call a font library and be done with it.

### Transformations 🔄
`2D Transformations`

Matrix math that lets you move, rotate, and scale objects without losing your mind (mostly).

## ⚠️ Disclaimer

All code was created for academic purposes. They demonstrate concepts but might not be optimized for production graphics engines. 

Some may cause **major** existential crises when debugging at 3AM😭😭

## 🚀 Running the Code

Most programs can be compiled with:
```
gcc filename.c
./a.out
```

## 💡 Troubleshooting

Having rendering issues or unexpected results?
- Double-check your transformation matrices (seriously, it's always the matrices)
- Make sure your coordinate systems are consistent
- Check if you're passing vectors by reference or by value
- When all else fails, add more debug visualization

Happy Coding 💻
