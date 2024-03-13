#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BugReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BugReport"));
	}

	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& BugType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& NickName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& BattleTag() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& ClientUtcTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& ServerClientTimeDelta() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& ClientVersion() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& DeviceModel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& OsVersion() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Vector2i*> T& ScreenResolution() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Ram() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& CpuModel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& QualityLevel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& Language() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& HasClan() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& ActiveRaid() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = float> T& TimeToOdinReset() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& InvitesSent() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& InvitesReceived() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& Location() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& DistrictLevel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& Karma() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& FileName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0xB8);
	}


};

