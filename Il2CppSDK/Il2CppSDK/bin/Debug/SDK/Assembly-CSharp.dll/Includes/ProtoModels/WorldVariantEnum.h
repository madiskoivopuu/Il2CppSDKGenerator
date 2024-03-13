#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class WorldVariantEnum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "WorldVariantEnum"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = WorldVariantEnum*> static T& WorldVariantNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldVariantEnum*> static T& WorldVariantHome() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldVariantEnum*> static T& WorldVariantEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldVariantEnum*> static T& WorldVariantDungeon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldVariantEnum*> static T& WorldVariantPveBot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldVariantEnum*> static T& WorldVariantPvePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldVariantEnum*> static T& WorldVariantHomeCellar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
