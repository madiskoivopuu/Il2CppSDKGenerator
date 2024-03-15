#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioHelper"));
	}


	template <typename R = void> static R Damage(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5BD24))(0, entity);
	}
	template <typename R = LoopSoundContainer*> static R GameWorkLoop(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5C0C8))(0, entity);
	}
	template <typename R = void> static R StopLoop(LoopSoundContainer* index) {
		return ((R (*)(void *, LoopSoundContainer*))(Il2CppBase() + 0x1A58F6C))(0, index);
	}
	template <typename R = Il2CppString*> static R GetSoundTag(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5C010))(0, gameEntity);
	}
	template <typename R = LoopSoundContainer*> static R ItemLoop(GameEntity* parentEntity, ItemEntity* itemEntity) {
		return ((R (*)(void *, GameEntity*, ItemEntity*))(Il2CppBase() + 0x1A58FA8))(0, parentEntity, itemEntity);
	}
	template <typename R = LoopSoundContainer*> static R GameLoop(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5C448))(0, gameEntity);
	}
	template <typename R = void> static R GameStopLoop(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5C5B8))(0, gameEntity);
	}
	template <typename R = void> static R GameCreate(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5C7EC))(0, entity);
	}
	template <typename R = void> static R GameOpen(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5CA44))(0, entity);
	}
	template <typename R = void> static R GameClose(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5CC9C))(0, entity);
	}
	template <typename R = void> static R GameDestroy(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5CEF4))(0, entity);
	}

};

