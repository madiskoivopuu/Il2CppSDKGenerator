#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioHelper"));
	}


	template <typename T = void> static T Damage(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5BD24))(0, entity);
	}
	template <typename T = LoopSoundContainer*> static T GameWorkLoop(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5C0C8))(0, entity);
	}
	template <typename T = void> static T StopLoop(LoopSoundContainer* index) {
		return ((T (*)(void *, LoopSoundContainer*))(Il2CppBase() + 0x1A58F6C))(0, index);
	}
	template <typename T = Il2CppString*> static T GetSoundTag(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5C010))(0, gameEntity);
	}
	template <typename T = LoopSoundContainer*> static T ItemLoop(GameEntity* parentEntity, ItemEntity* itemEntity) {
		return ((T (*)(void *, GameEntity*, ItemEntity*))(Il2CppBase() + 0x1A58FA8))(0, parentEntity, itemEntity);
	}
	template <typename T = LoopSoundContainer*> static T GameLoop(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5C448))(0, gameEntity);
	}
	template <typename T = void> static T GameStopLoop(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5C5B8))(0, gameEntity);
	}
	template <typename T = void> static T GameCreate(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5C7EC))(0, entity);
	}
	template <typename T = void> static T GameOpen(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5CA44))(0, entity);
	}
	template <typename T = void> static T GameClose(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5CC9C))(0, entity);
	}
	template <typename T = void> static T GameDestroy(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1A5CEF4))(0, entity);
	}

};

