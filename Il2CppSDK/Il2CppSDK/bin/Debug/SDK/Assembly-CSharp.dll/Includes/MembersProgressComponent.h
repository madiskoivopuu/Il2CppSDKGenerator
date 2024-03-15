#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MembersProgressComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MembersProgressComponent"));
	}

	template <typename R = Il2CppArray<MemberProgress*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MembersProgressComponent*, Il2CppObject*))(Il2CppBase() + 0x12CD84C))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MembersProgressComponent*, uintptr_t))(Il2CppBase() + 0x12CD8E4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MembersProgressComponent*, uintptr_t))(Il2CppBase() + 0x12CDA4C))(this, writer);
	}

};

