#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFogEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFogEntity"));
	}


	template <typename T = FogComponent*> T get_fog() {
		return ((T (*)(IFogEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasFog() {
		return ((T (*)(IFogEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddFog(Il2CppString* newName) {
		return ((T (*)(IFogEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceFog(Il2CppString* newName) {
		return ((T (*)(IFogEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveFog() {
		return ((T (*)(IFogEntity*))(Il2CppBase() + 0x0))(this);
	}

};

