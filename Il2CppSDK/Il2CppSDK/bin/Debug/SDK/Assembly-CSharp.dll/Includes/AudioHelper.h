#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioHelper"));
	}


	template <typename T = void> static T Damage(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5BD24))(0, entity);
	}
	template <typename T = uintptr_t> static T GameWorkLoop(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5C0C8))(0, entity);
	}
	template <typename T = void> static T StopLoop(uintptr_t index) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A58F6C))(0, index);
	}
	template <typename T = Il2CppString*> static T GetSoundTag(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5C010))(0, gameEntity);
	}
	template <typename T = uintptr_t> static T ItemLoop(uintptr_t parentEntity, uintptr_t itemEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A58FA8))(0, parentEntity, itemEntity);
	}
	template <typename T = uintptr_t> static T GameLoop(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5C448))(0, gameEntity);
	}
	template <typename T = void> static T GameStopLoop(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5C5B8))(0, gameEntity);
	}
	template <typename T = void> static T GameCreate(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5C7EC))(0, entity);
	}
	template <typename T = void> static T GameOpen(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5CA44))(0, entity);
	}
	template <typename T = void> static T GameClose(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5CC9C))(0, entity);
	}
	template <typename T = void> static T GameDestroy(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5CEF4))(0, entity);
	}

};

}
