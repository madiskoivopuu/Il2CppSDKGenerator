#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExchangeResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeResult"));
	}

	template <typename R = int32_t> R& Reward() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& ErrorMsg() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ExchangeResult*, uintptr_t))(Il2CppBase() + 0x179509C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ExchangeResult*, uintptr_t))(Il2CppBase() + 0x17950F0))(this, reader);
	}

};

