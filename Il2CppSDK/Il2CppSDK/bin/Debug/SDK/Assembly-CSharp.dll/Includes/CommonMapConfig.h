#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommonMapConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommonMapConfig"));
	}

	template <typename R = Il2CppString*> static R& MapEntities() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PointEntities() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = float> static R& MoveSpeed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& RunSpeed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& MaxEnergy() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& DistancePerEnergy() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& EnergyRecoverTime() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint32_t> static R& UnlockLocationExperience() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& EnergyRefillCoinPrice() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Shield() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SocialHub() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Home() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SeasonMapPoint() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppList<Il2CppString*>*& PvPMaps() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = int32_t> static R& MinSecondsToLockLocation() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

