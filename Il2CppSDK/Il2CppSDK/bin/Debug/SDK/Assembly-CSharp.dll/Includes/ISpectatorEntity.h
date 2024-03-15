#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpectatorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpectatorEntity"));
	}


	template <typename R = SpectatorComponent*> R get_spectator() {
		return ((R (*)(ISpectatorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSpectator() {
		return ((R (*)(ISpectatorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((R (*)(ISpectatorEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename R = void> R ReplaceSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((R (*)(ISpectatorEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename R = void> R RemoveSpectator() {
		return ((R (*)(ISpectatorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

