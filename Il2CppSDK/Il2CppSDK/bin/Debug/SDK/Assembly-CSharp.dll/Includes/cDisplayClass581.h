#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass581
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass58_1"));
	}

	template <typename R = GooglePlayGamesBasicApi::UIStatus*> R& status() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass580*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R GetUiSignOutCallbackOnGameThreadb__1() {
		return ((R (*)(cDisplayClass581*))(Il2CppBase() + 0x113F0E0))(this);
	}

};

