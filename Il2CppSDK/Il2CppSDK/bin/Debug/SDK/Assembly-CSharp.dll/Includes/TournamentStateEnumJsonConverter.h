#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeEnumJsonConverter1.h" 
#include "TournamentState.h" 

class TournamentStateEnumJsonConverter : public TypeEnumJsonConverter1<TournamentState>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentStateEnumJsonConverter"));
	}



};

