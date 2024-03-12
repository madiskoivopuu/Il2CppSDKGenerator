#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DataBlueprints
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataBlueprints"));
	}

	template <typename T = Il2CppString*> static T& VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& Version() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> T& Datas() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DataBlueprints*))(Il2CppBase() + 0x164E9A0))(this);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DataBlueprints*, uintptr_t))(Il2CppBase() + 0x164ED70))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DataBlueprints*, uintptr_t))(Il2CppBase() + 0x164F2E8))(this, writer);
	}

};

}
