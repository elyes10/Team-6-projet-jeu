//SETTINGS BUTTONS

		BacktoM = IMG_Load("MENUart/Settings_pngs/Back.png");
		BacktoMHL = IMG_Load("MENUart/Settings_pngs/BackHL.png");

		Controles = IMG_Load("MENUart/Settings_pngs/Controles.png");
		ControlesHL = IMG_Load("MENUart/Settings_pngs/ControlesHL.png");

		Volume = IMG_Load("MENUart/Settings_pngs/Volume.png");
		VolumeHL = IMG_Load("MENUart/Settings_pngs/VolumeHL.png");

		VolHigh = IMG_Load("MENUart/Settings_pngs/High.png");
		VolHighHL = IMG_Load("MENUart/Settings_pngs/HighHL.png");


		VolMed = IMG_Load("MENUart/Settings_pngs/Med.png");
		VolMedHL = IMG_Load("MENUart/Settings_pngs/MedHL.png");

		VolLow = IMG_Load("MENUart/Settings_pngs/Low.png");
		VolLowHL = IMG_Load("MENUart/Settings_pngs/LowHL.png");

		PaperBG = IMG_Load("MENUart/Settings_pngs/temp.png");


		SDL_Flip(Screen);
		ETAT = 7;

		while (settingsLOOP != 0) {
			SDL_BlitSurface(BackGround, NULL, Screen, NULL);
			SDL_BlitSurface(PaperBG, NULL, Screen , NULL);




			if (ETAT == 6)
				SDL_BlitSurface(BacktoMHL, NULL, Screen, NULL);
			else
				SDL_BlitSurface(BacktoM, NULL, Screen , NULL);

			if (ETAT == 5)
				SDL_BlitSurface(ControlesHL, NULL, Screen , NULL);
			else
				SDL_BlitSurface(Controles, NULL, Screen , NULL);

			if (ETAT == 4)
				SDL_BlitSurface(VolumeHL, NULL, Screen , NULL);
			else
				SDL_BlitSurface(Volume, NULL, Screen , NULL);

			if (ETAT == 3)
				SDL_BlitSurface(VolLowHL, NULL, Screen , NULL);
			else
				SDL_BlitSurface(VolLow, NULL, Screen , NULL);

			if (ETAT == 2)
				SDL_BlitSurface(VolMedHL, NULL, Screen , NULL);
			else
				SDL_BlitSurface(VolMed, NULL, Screen , NULL);

			if (ETAT == 1)
				SDL_BlitSurface(VolHighHL, NULL, Screen , NULL);
			else
				SDL_BlitSurface(VolHigh, NULL, Screen , NULL);








			SDL_PollEvent(&event);

			switch (event.type) {
			case SDL_QUIT:
				settingsLOOP = 0;
				break;

			case SDL_KEYDOWN:
				if ((event.key.keysym.sym == SDLK_DOWN) || (event.key.keysym.sym == SDLK_RIGHT))

				{
					if (ETAT <= 0) {
						ETAT = 7;
					}
					ETAT--;
					SDL_Delay(100);
				}
				if ((event.key.keysym.sym == SDLK_UP) || (event.key.keysym.sym == SDLK_LEFT))

				{
					if (ETAT >= 6) {
						ETAT = 0;
					}
					ETAT++;
					SDL_Delay(100);
				}
			}

			SDL_Flip(Screen);

		}
