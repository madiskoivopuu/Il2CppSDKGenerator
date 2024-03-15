#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "LobbyType.h" 

class LobbyTypeComponent : public EnumComponent1<LobbyType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyTypeComponent"));
	}



};

