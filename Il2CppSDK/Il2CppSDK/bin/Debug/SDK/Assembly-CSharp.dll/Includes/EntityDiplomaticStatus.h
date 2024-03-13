#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityDiplomaticStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityDiplomaticStatus"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = EntityDiplomaticStatus*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = EntityDiplomaticStatus*> static T& Avatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = EntityDiplomaticStatus*> static T& FamilyMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = EntityDiplomaticStatus*> static T& Ally() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = EntityDiplomaticStatus*> static T& Ordinary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = EntityDiplomaticStatus*> static T& NonDiplomatic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = EntityDiplomaticStatus*> static T& Enemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = EntityDiplomaticStatus*> static T& AggressiveEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

