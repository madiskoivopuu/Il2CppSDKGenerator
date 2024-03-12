#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesOurUtils {

class PlayGamesHelperObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesOurUtils", "PlayGamesHelperObject"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& sIsDummy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& sQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& localQueue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> static T& sQueueEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppList<void*>*> static T& sPauseCallbackList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppList<void*>*> static T& sFocusCallbackList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> static T CreateObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x16F9E38))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayGamesHelperObject*))(Il2CppBase() + 0x16FA090))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PlayGamesHelperObject*))(Il2CppBase() + 0x16FA108))(this);
	}
	template <typename T = void> static T RunCoroutine(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16FA1F4))(0, action);
	}
	template <typename T = void> static T RunOnGameThread(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16FA358))(0, action);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayGamesHelperObject*))(Il2CppBase() + 0x16FA534))(this);
	}
	template <typename T = void> T OnApplicationFocus(bool focused) {
		return ((T (*)(PlayGamesHelperObject*, bool))(Il2CppBase() + 0x16FA7A8))(this, focused);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(PlayGamesHelperObject*, bool))(Il2CppBase() + 0x16FAAE4))(this, paused);
	}
	template <typename T = void> static T AddFocusCallback(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x16FAE20))(0, callback);
	}
	template <typename T = bool> static T RemoveFocusCallback(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x16FAF04))(0, callback);
	}
	template <typename T = void> static T AddPauseCallback(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x16FAF90))(0, callback);
	}
	template <typename T = bool> static T RemovePauseCallback(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x16FB074))(0, callback);
	}

};

}
