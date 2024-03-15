#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BugReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BugReport"));
	}

	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Description() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Priority() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& BugType() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = Il2CppString*> R& NickName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int64_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& BattleTag() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& ClientUtcTime() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& ServerClientTimeDelta() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& ClientVersion() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& DeviceModel() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& OsVersion() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Vector2i*> R& ScreenResolution() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& Ram() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& CpuModel() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> R& QualityLevel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& Language() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = bool> R& HasClan() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = bool> R& ActiveRaid() {
		return *(R*)((uintptr_t)this + 0x91);
	}
	template <typename R = float> R& TimeToOdinReset() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = int32_t> R& InvitesSent() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = int32_t> R& InvitesReceived() {
		return *(R*)((uintptr_t)this + 0x9C);
	}
	template <typename R = Il2CppString*> R& Location() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> R& DistrictLevel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> R& Karma() {
		return *(R*)((uintptr_t)this + 0xAC);
	}
	template <typename R = Il2CppString*> R& FileName() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0xB8);
	}


};

