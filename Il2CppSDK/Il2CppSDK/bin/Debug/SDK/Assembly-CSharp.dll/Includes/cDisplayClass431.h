#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass431
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass43_1"));
	}

	template <typename R = Price> R& price() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IEnumerable1<Il2CppString*>*& resx() {
		return *(IEnumerable1<Il2CppString*>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R OnButtonPriceClickedb__2(int32_t successTransactionId) {
		return ((R (*)(cDisplayClass431*, int32_t))(Il2CppBase() + 0xE9282C))(this, successTransactionId);
	}

};

