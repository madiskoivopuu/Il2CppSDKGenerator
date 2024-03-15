#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class SignInHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "SignInHelper"));
	}

	template <typename R = int32_t> static R& True() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& False() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename R = Il2CppString*> static R& PromptSignInKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = GooglePlayGamesBasicApi::SignInStatus*> static R ToSignInStatus(int32_t code) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x147EF7C))(0, code);
	}
	template <typename R = void> static R SetPromptUiSignIn(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x147F144))(0, value);
	}
	template <typename R = bool> static R ShouldPromptUiSignIn() {
		return ((R (*)(void *))(Il2CppBase() + 0x147F1F8))(0);
	}

};

}
