#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass431
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass43_1"));
	}

	template <typename T = Price*> T& price() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IEnumerable1Il2CppString*>*> T& resx() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnButtonPriceClickedb__2(int32_t successTransactionId) {
		return ((T (*)(cDisplayClass431*, int32_t))(Il2CppBase() + 0xE9282C))(this, successTransactionId);
	}

};

