#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class WorldStatusType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "WorldStatusType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = WorldStatusType*> static T& HomeWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldStatusType*> static T& Raid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldStatusType*> static T& Pve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldStatusType*> static T& Unknown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldStatusType*> static T& GlobalMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldStatusType*> static T& Dungeon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldStatusType*> static T& PrivateUserDungeon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldStatusType*> static T& HomeDistrict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldStatusType*> static T& District() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldStatusType*> static T& GuildDistrict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
