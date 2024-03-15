#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFogEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFogEntity"));
	}


	template <typename R = FogComponent*> R get_fog() {
		return ((R (*)(IFogEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasFog() {
		return ((R (*)(IFogEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddFog(Il2CppString* newName) {
		return ((R (*)(IFogEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceFog(Il2CppString* newName) {
		return ((R (*)(IFogEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveFog() {
		return ((R (*)(IFogEntity*))(Il2CppBase() + 0x0))(this);
	}

};

