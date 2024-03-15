#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidTaskUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidTaskUtils"));
	}


	template <typename R = void> static R AddOnSuccessListener(uintptr_t task, Action1uintptr_t>* callback) {
		return ((R (*)(void *, uintptr_t, Action1uintptr_t>*))(Il2CppBase() + 0x0))(0, task, callback);
	}
	template <typename R = void> static R AddOnSuccessListener_1(uintptr_t task, bool disposeResult, Action1uintptr_t>* callback) {
		return ((R (*)(void *, uintptr_t, bool, Action1uintptr_t>*))(Il2CppBase() + 0x0))(0, task, disposeResult, callback);
	}
	template <typename R = void> static R AddOnFailureListener(uintptr_t task, Action1uintptr_t>* callback) {
		return ((R (*)(void *, uintptr_t, Action1uintptr_t>*))(Il2CppBase() + 0x1887778))(0, task, callback);
	}
	template <typename R = void> static R AddOnCompleteListener(uintptr_t task, Action1uintptr_t>* callback) {
		return ((R (*)(void *, uintptr_t, Action1uintptr_t>*))(Il2CppBase() + 0x0))(0, task, callback);
	}

};

}
