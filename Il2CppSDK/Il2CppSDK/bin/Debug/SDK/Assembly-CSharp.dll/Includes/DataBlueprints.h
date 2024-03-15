#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DataBlueprints
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataBlueprints"));
	}

	template <typename R = Il2CppString*> static R& VERSION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& Version() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppArray<ValueTuple2<Il2CppString*, Il2CppString*>*>*>*& Datas() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppArray<ValueTuple2<Il2CppString*, Il2CppString*>*>*>**)((uintptr_t)this + 0x8);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DataBlueprints*))(Il2CppBase() + 0x164E9A0))(this);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DataBlueprints*, uintptr_t))(Il2CppBase() + 0x164ED70))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DataBlueprints*, uintptr_t))(Il2CppBase() + 0x164F2E8))(this, writer);
	}

};

