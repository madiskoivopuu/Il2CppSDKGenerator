#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MembersProgressComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MembersProgressComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(MembersProgressComponent*, Il2CppObject*))(Il2CppBase() + 0x12CD84C))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MembersProgressComponent*, uintptr_t))(Il2CppBase() + 0x12CD8E4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MembersProgressComponent*, uintptr_t))(Il2CppBase() + 0x12CDA4C))(this, writer);
	}

};

