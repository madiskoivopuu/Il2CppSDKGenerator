#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PriceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriceComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(PriceComponent*, Il2CppObject*))(Il2CppBase() + 0x16E3810))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PriceComponent*, uintptr_t))(Il2CppBase() + 0x16E388C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PriceComponent*, uintptr_t))(Il2CppBase() + 0x16E39E8))(this, writer);
	}
	template <typename T = Price*> T GetPriceWithIndex(int32_t index) {
		return ((T (*)(PriceComponent*, int32_t))(Il2CppBase() + 0x16E3A90))(this, index);
	}

};

