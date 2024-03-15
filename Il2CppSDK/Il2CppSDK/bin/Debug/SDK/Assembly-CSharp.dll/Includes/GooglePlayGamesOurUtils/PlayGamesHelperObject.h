#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesOurUtils {

class PlayGamesHelperObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesOurUtils", "PlayGamesHelperObject"));
	}

	template <typename R = GooglePlayGamesOurUtils::PlayGamesHelperObject*> static R& instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& sIsDummy() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Il2CppList<uintptr_t>*& sQueue() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 Il2CppList<uintptr_t>*& localQueue() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> static R& sQueueEmpty() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static Il2CppList<Action1bool>*>*& sPauseCallbackList() {
		return *(Il2CppList<Action1bool>*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static Il2CppList<Action1bool>*>*& sFocusCallbackList() {
		return *(Il2CppList<Action1bool>*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename R = void> static R CreateObject() {
		return ((R (*)(void *))(Il2CppBase() + 0x16F9E38))(0);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayGamesHelperObject*))(Il2CppBase() + 0x16FA090))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(PlayGamesHelperObject*))(Il2CppBase() + 0x16FA108))(this);
	}
	template <typename R = void> static R RunCoroutine(uintptr_t action) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x16FA1F4))(0, action);
	}
	template <typename R = void> static R RunOnGameThread(uintptr_t action) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x16FA358))(0, action);
	}
	template <typename R = void> R Update() {
		return ((R (*)(PlayGamesHelperObject*))(Il2CppBase() + 0x16FA534))(this);
	}
	template <typename R = void> R OnApplicationFocus(bool focused) {
		return ((R (*)(PlayGamesHelperObject*, bool))(Il2CppBase() + 0x16FA7A8))(this, focused);
	}
	template <typename R = void> R OnApplicationPause(bool paused) {
		return ((R (*)(PlayGamesHelperObject*, bool))(Il2CppBase() + 0x16FAAE4))(this, paused);
	}
	template <typename R = void> static R AddFocusCallback(Action1bool>* callback) {
		return ((R (*)(void *, Action1bool>*))(Il2CppBase() + 0x16FAE20))(0, callback);
	}
	template <typename R = bool> static R RemoveFocusCallback(Action1bool>* callback) {
		return ((R (*)(void *, Action1bool>*))(Il2CppBase() + 0x16FAF04))(0, callback);
	}
	template <typename R = void> static R AddPauseCallback(Action1bool>* callback) {
		return ((R (*)(void *, Action1bool>*))(Il2CppBase() + 0x16FAF90))(0, callback);
	}
	template <typename R = bool> static R RemovePauseCallback(Action1bool>* callback) {
		return ((R (*)(void *, Action1bool>*))(Il2CppBase() + 0x16FB074))(0, callback);
	}

};

}
