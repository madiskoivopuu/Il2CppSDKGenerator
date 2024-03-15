#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass270
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass27_0"));
	}

	template <typename R = GooglePlayGamesAndroid::AndroidTokenClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Action1int32_t>*& callback() {
		return *(Action1int32_t>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R DoFetchTokenb__0(uintptr_t tokenResult) {
		return ((R (*)(cDisplayClass270*, uintptr_t))(Il2CppBase() + 0x1147750))(this, tokenResult);
	}

};

