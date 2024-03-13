#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class WorldResourcesType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "WorldResourcesType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = WorldResourcesType*> static T& WrtDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldResourcesType*> static T& WrtIceLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldResourcesType*> static T& WrtGuilds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldResourcesType*> static T& WrtPortals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldResourcesType*> static T& WrtEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldResourcesType*> static T& WrtDungeonA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldResourcesType*> static T& WrtMounts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldResourcesType*> static T& WrtElvesLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldResourcesType*> static T& WrtWeapons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldResourcesType*> static T& WrtCore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
