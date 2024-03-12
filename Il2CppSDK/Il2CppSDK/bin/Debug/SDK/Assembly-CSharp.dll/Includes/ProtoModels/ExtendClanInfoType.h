#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ExtendClanInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ExtendClanInfoType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CellLockTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_cellLockTimeUnix_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& cellLockTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NoPvpTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& noPvpTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ActivePvpUsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_activePvpUsers_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& activePvpUsers_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& StatueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& statue_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ScoutFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& scout_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CanCanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& canCan_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& LocationsGradeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_locationsGrade_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> T& locationsGrade_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& RaidMatchingTimeoutFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& raidMatchingTimeout_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& ClanGameDataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_clanGameData_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> T& clanGameData_() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16862FC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1686360))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686480))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x16867E8))(this);
	}
	template <typename T = void*> T get_CellLockTimeUnix() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686844))(this);
	}
	template <typename T = int64_t> T get_NoPvpTimeUnix() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x168684C))(this);
	}
	template <typename T = void> T set_NoPvpTimeUnix(int64_t value) {
		return ((T (*)(ExtendClanInfoType*, int64_t))(Il2CppBase() + 0x1686854))(this, value);
	}
	template <typename T = void*> T get_ActivePvpUsers() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x168685C))(this);
	}
	template <typename T = uintptr_t> T get_Statue() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686864))(this);
	}
	template <typename T = void> T set_Statue(uintptr_t value) {
		return ((T (*)(ExtendClanInfoType*, uintptr_t))(Il2CppBase() + 0x168686C))(this, value);
	}
	template <typename T = uintptr_t> T get_Scout() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686874))(this);
	}
	template <typename T = void> T set_Scout(uintptr_t value) {
		return ((T (*)(ExtendClanInfoType*, uintptr_t))(Il2CppBase() + 0x168687C))(this, value);
	}
	template <typename T = uintptr_t> T get_CanCan() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686884))(this);
	}
	template <typename T = void> T set_CanCan(uintptr_t value) {
		return ((T (*)(ExtendClanInfoType*, uintptr_t))(Il2CppBase() + 0x168688C))(this, value);
	}
	template <typename T = void*> T get_LocationsGrade() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686894))(this);
	}
	template <typename T = int64_t> T get_RaidMatchingTimeout() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x168689C))(this);
	}
	template <typename T = void> T set_RaidMatchingTimeout(int64_t value) {
		return ((T (*)(ExtendClanInfoType*, int64_t))(Il2CppBase() + 0x16868A4))(this, value);
	}
	template <typename T = void*> T get_ClanGameData() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x16868AC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ExtendClanInfoType*, uintptr_t))(Il2CppBase() + 0x16868B4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ExtendClanInfoType*, uintptr_t))(Il2CppBase() + 0x1686924))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686A90))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686BA0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ExtendClanInfoType*, uintptr_t))(Il2CppBase() + 0x1686C04))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686E74))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ExtendClanInfoType*, uintptr_t))(Il2CppBase() + 0x1687144))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ExtendClanInfoType*, uintptr_t))(Il2CppBase() + 0x1687360))(this, input);
	}

};

}
