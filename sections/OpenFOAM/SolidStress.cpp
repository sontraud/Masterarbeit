if ((uRelative & alphaGrad) > 0)
    {
        dU = - deltaT*tauGrad/(p.rho()*(alpha + SMALL)/* + deltaT*F.Sp()*/);
    }