<?php
require_once __DIR__ . '/../vendor/autoload.php';

$usuario = new Models\Usuario(1, 'Saray', 'Terrible', 50, 'Fluido', 'laterrible@gmail.com');
$usuario2 = new Models\Usuario(2, 'Estheri', 'Papaya', 25, 'Quimico', 'laminion@gmail.com');
$usuario3 = new Models\Usuario(3, 'kiñones', 'f de fea', 81, 'masculina', 'yosoyfea@gmail.com');

$estudiante = new Models\Estudiante(
    1, // idEstudiante
    'Saray', // nombres
    'Terrible', // apellidos
    50, // edad
    'Fluido', // genero
    'laterrible@gmail.com', // email
    'Mexicana', // nacionalidad
    '1975-01-01', // nacimiento
    50, // peso
    160, // altura
    'S', // tallaVestimenta
    28, // tallaPantalones
    45, // tallaZapatos
    'N', // visualesImpar
    'N', // auditivosImpar
    'N', // autismo
    'N/A', // otrasDiscapacidades
    'N/A', // alergias
    0, // enfermedadesCertificadas
    'N/A',
    true // estaActivo
);

$guardian = new Models\Guardian(
    1, // idGuardian
    'Estheri', // nombres
    'Papaya', // apellidos
    25, // edad
    'Quimico', // genero
    'laminion@gmail.com', // email
    'Minion', // nacionalidad
    '1995-05-05', // nacimiento
    'Ingeniera', // ocupacion
    'Calle Falsa 123', // domicilio
    '5512345678', // telefonoPrimario
    '5587654321', // telefonoSecundario
    'laminion@gmail.com', // email
    'Madre', // tipoRelacion
    true // esGuardianLegal
);

// echo $usuario->mostrar() . "<br>";
// echo $usuario2->mostrar() . "<br>";
// echo $usuario3->mostrar() . "<br>";
echo $estudiante->mostrarEstudiante() . "<br>";
echo $guardian->mostrarGuardian() . "<br>";
?>
