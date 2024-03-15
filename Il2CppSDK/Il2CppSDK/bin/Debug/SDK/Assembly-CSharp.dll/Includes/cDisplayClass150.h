#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass150
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass15_0"));
	}

	template <typename R = AsyncAnimations::AnimatorAwaitable*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& onComplete() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 TaskCompletionSource1IAwaitable1Il2CppString*>*>*& source() {
		return *(TaskCompletionSource1IAwaitable1Il2CppString*>*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R GetAwaiterb__0() {
		return ((R (*)(cDisplayClass150*))(Il2CppBase() + 0x11483E0))(this);
	}

};

