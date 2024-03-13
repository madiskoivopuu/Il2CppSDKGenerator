#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpectatorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpectatorEntity"));
	}


	template <typename T = SpectatorComponent*> T get_spectator() {
		return ((T (*)(ISpectatorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSpectator() {
		return ((T (*)(ISpectatorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((T (*)(ISpectatorEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename T = void> T ReplaceSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((T (*)(ISpectatorEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename T = void> T RemoveSpectator() {
		return ((T (*)(ISpectatorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

