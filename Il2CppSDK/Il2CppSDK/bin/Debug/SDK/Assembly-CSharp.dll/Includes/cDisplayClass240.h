#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass240
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass24_0"));
	}

	template <typename R = GooglePlayGamesAndroid::AndroidTokenClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& silent() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action1int32_t>*& callback() {
		return *(Action1int32_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R FetchTokensb__0() {
		return ((R (*)(cDisplayClass240*))(Il2CppBase() + 0x1147160))(this);
	}

};

