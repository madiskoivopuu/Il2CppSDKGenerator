#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class SignInHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "SignInHelper"));
	}

	template <typename T = int32_t> static T& True() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& False() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& PromptSignInKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = SignInStatus*> static T ToSignInStatus(int32_t code) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x147EF7C))(0, code);
	}
	template <typename T = void> static T SetPromptUiSignIn(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x147F144))(0, value);
	}
	template <typename T = bool> static T ShouldPromptUiSignIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x147F1F8))(0);
	}

};

}
