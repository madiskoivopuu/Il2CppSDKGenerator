#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass560
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass56_0"));
	}

	template <typename R = IInventoryItem*> R& item() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R UpdateInventoryb__0(KeyValuePair2<int32_t, IClickable*>* i) {
		return ((R (*)(cDisplayClass560*, KeyValuePair2<int32_t, IClickable*>*))(Il2CppBase() + 0x10A7D24))(this, i);
	}

};

