#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass131
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass13_1"));
	}

	template <typename T = IConflictResolver*> T& resolver() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ISavedGameMetadata*> T& original() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& originalData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ISavedGameMetadata*> T& unmerged() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& unmergedData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = cDisplayClass130*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T ToOnGameThreadb__1() {
		return ((T (*)(cDisplayClass131*))(Il2CppBase() + 0x1144884))(this);
	}

};

