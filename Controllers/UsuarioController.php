<?php

namespace Controllers;

use Models\Estudiante;
use Models\Guardian;

class UsuarioController
{
    public function mostrarEstudiante($idEstudiante)
    {
        // Simulación de consulta a la base de datos
        $estudiante = new Estudiante($idEstudiante, 'Saray', 'Terrible', 50, 'Fluido', 'laterrible@gmail.com', 'Mexicana', '1975-01-01', 50, 160, 'S', 'M', 'F', 'N', 'N', 'N', 'N/A', 'N/A', 0, true);
        return $estudiante;
    }

    public function mostrarGuardian($idGuardian)
    {
        // Simulación de consulta a la base de datos
        $guardian = new Guardian($idGuardian, 'Estheri', 'Papaya', 25, 'Quimico', 'laminion@gmail.com', 'Mexicana', '1995-05-05', 'Ingeniera', 'Calle Falsa 123', '5512345678', '5587654321', 'laminion@gmail.com', 'Madre', true);
        return $guardian;
    }
}
