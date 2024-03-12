#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidTaskUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidTaskUtils"));
	}


	template <typename T = void> static T AddOnSuccessListener(uintptr_t task, void* callback) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, task, callback);
	}
	template <typename T = void> static T AddOnSuccessListener_1(uintptr_t task, bool disposeResult, void* callback) {
		return ((T (*)(void *, uintptr_t, bool, void*))(Il2CppBase() + 0x0))(0, task, disposeResult, callback);
	}
	template <typename T = void> static T AddOnFailureListener(uintptr_t task, void* callback) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x1887778))(0, task, callback);
	}
	template <typename T = void> static T AddOnCompleteListener(uintptr_t task, void* callback) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, task, callback);
	}

};

}
