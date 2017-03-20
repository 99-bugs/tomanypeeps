var express = require('express')
var app = express()
var exphbs  = require('express-handlebars')

// Serve static files
app.use(express.static('public'))

// Use handlebars teplating engine
app.engine('handlebars', exphbs({defaultLayout: 'main'}))
app.set('view engine', 'handlebars')

app.get('/:sensor_id?', function (req, res) {
  res.render('home', { sensor_id: req.params.sensor_id || "demo"} )
})

app.listen(3000, function () {
  console.log('Example app listening on port 3000!')
})
