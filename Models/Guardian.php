<?php

namespace Models;

class Guardian extends Usuario
{
    private $idGuardian;
    private $nacionalidad;
    private $nacimiento;
    private $ocupacion;
    private $domicilio;
    private $telefonoPrimario;
    private $telefonoSecundario;
    private $email;
    private $tipoRelacion;
    private $esGuardianLegal;

    public function __construct($idGuardian, $nombres, $apellidos, $edad, $genero, $email, $nacionalidad, $nacimiento, $ocupacion, $domicilio, $telefonoPrimario, $telefonoSecundario, $tipoRelacion, $esGuardianLegal)
    {
        parent::__construct($idGuardian, $nombres, $apellidos, $edad, $genero, $email);
        $this->idGuardian = $idGuardian;
        $this->nacionalidad = $nacionalidad;
        $this->nacimiento = $nacimiento;
        $this->ocupacion = $ocupacion;
        $this->domicilio = $domicilio;
        $this->telefonoPrimario = $telefonoPrimario;
        $this->telefonoSecundario = $telefonoSecundario;
        $this->email = $email;
        $this->tipoRelacion = $tipoRelacion;
        $this->esGuardianLegal = $esGuardianLegal;
    }

    public function getIdGuardian()
    {
        return $this->idGuardian;
    }

    public function setIdGuardian($idGuardian)
    {
        $this->idGuardian = $idGuardian;
    }

    public function getNacionalidad()
    {
        return $this->nacionalidad;
    }

    public function setNacionalidad($nacionalidad)
    {
        $this->nacionalidad = $nacionalidad;
    }

    public function getNacimiento()
    {
        return $this->nacimiento;
    }

    public function setNacimiento($nacimiento)
    {
        $this->nacimiento = $nacimiento;
    }

    public function getOcupacion()
    {
        return $this->ocupacion;
    }

    public function setOcupacion($ocupacion)
    {
        $this->ocupacion = $ocupacion;
    }

    public function getDomicilio()
    {
        return $this->domicilio;
    }

    public function setDomicilio($domicilio)
    {
        $this->domicilio = $domicilio;
    }

    public function getTelefonoPrimario()
    {
        return $this->telefonoPrimario;
    }

    public function setTelefonoPrimario($telefonoPrimario)
    {
        $this->telefonoPrimario = $telefonoPrimario;
    }

    public function getTelefonoSecundario()
    {
        return $this->telefonoSecundario;
    }

    public function setTelefonoSecundario($telefonoSecundario)
    {
        $this->telefonoSecundario = $telefonoSecundario;
    }

    public function getEmail()
    {
        return $this->email;
    }

    public function setEmail($email)
    {
        $this->email = $email;
    }

    public function getTipoRelacion()
    {
        return $this->tipoRelacion;
    }

    public function setTipoRelacion($tipoRelacion)
    {
        $this->tipoRelacion = $tipoRelacion;
    }

    public function getEsGuardianLegal()
    {
        return $this->esGuardianLegal;
    }

    public function setEsGuardianLegal($esGuardianLegal)
    {
        $this->esGuardianLegal = $esGuardianLegal;
    }
    public function mostrarGuardian()
    {
        return parent::mostrar() . "<br>" .
            "Nacionalidad: " . $this->getNacionalidad() . "<br>" .
            "Fecha de Nacimiento: " . $this->getNacimiento() . "<br>" .
            "Ocupación: " . $this->getOcupacion() . "<br>" .
            "Dirección: " . $this->getDomicilio() . "<br>" .
            "Telefono: " . $this->getTelefonoPrimario() . "<br>" .
            "Celular: " . $this->getTelefonoSecundario() . "<br>" .
            "Correo: " . $this->getEmail() . "<br>" .
            "Relacion: " . $this->getTipoRelacion() . "<br>" .
            "Es representante: " . $this->getEsGuardianLegal() . "<br>";
    }
}
