#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWorldWithParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWorldWithParams"));
	}


	template <typename R = LocationEntity*> R get_WorldParams() {
		return ((R (*)(IWorldWithParams*))(Il2CppBase() + 0x0))(this);
	}

};

