#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "TournamentState.h" 

class TournamentStateComponent : public EnumComponent1<TournamentState*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentStateComponent"));
	}



};

