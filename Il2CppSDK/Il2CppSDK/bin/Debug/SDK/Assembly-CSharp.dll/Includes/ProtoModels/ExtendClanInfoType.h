#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ExtendClanInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ExtendClanInfoType"));
	}

	 static MessageParser1<ProtoModels::ExtendClanInfoType*>*& _parser() {
		return *(MessageParser1<ProtoModels::ExtendClanInfoType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CellLockTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_cellLockTimeUnix_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<int64_t>*& cellLockTimeUnix_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NoPvpTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& noPvpTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ActivePvpUsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::UserRound*>*& _repeated_activePvpUsers_codec() {
		return *(FieldCodec1<ProtoModels::UserRound*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<ProtoModels::UserRound*>*& activePvpUsers_() {
		return *(RepeatedField1<ProtoModels::UserRound*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& StatueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClanEventType*> R& statue_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ScoutFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClanEventType*> R& scout_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& CanCanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Can*> R& canCan_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& LocationsGradeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, int32_t>*& _map_locationsGrade_codec() {
		return *(Codec<Il2CppString*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 MapField2<Il2CppString*, int32_t>*& locationsGrade_() {
		return *(MapField2<Il2CppString*, int32_t>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& RaidMatchingTimeoutFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& raidMatchingTimeout_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& ClanGameDataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, Il2CppString*>*& _map_clanGameData_codec() {
		return *(Codec<Il2CppString*, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 MapField2<Il2CppString*, Il2CppString*>*& clanGameData_() {
		return *(MapField2<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x50);
	}

	 static MessageParser1<ProtoModels::ExtendClanInfoType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ExtendClanInfoType*>* (*)(void *))(Il2CppBase() + 0x16862FC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1686360))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686480))(this);
	}
	template <typename R = ProtoModels::ExtendClanInfoType*> R Clone() {
		return ((R (*)(ExtendClanInfoType*))(Il2CppBase() + 0x16867E8))(this);
	}
	 RepeatedField1<int64_t>* get_CellLockTimeUnix() {
		return ((RepeatedField1<int64_t>* (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686844))(this);
	}
	template <typename R = int64_t> R get_NoPvpTimeUnix() {
		return ((R (*)(ExtendClanInfoType*))(Il2CppBase() + 0x168684C))(this);
	}
	template <typename R = void> R set_NoPvpTimeUnix(int64_t value) {
		return ((R (*)(ExtendClanInfoType*, int64_t))(Il2CppBase() + 0x1686854))(this, value);
	}
	 RepeatedField1<ProtoModels::UserRound*>* get_ActivePvpUsers() {
		return ((RepeatedField1<ProtoModels::UserRound*>* (*)(ExtendClanInfoType*))(Il2CppBase() + 0x168685C))(this);
	}
	template <typename R = ProtoModels::ClanEventType*> R get_Statue() {
		return ((R (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686864))(this);
	}
	template <typename R = void> R set_Statue(ProtoModels::ClanEventType* value) {
		return ((R (*)(ExtendClanInfoType*, ProtoModels::ClanEventType*))(Il2CppBase() + 0x168686C))(this, value);
	}
	template <typename R = ProtoModels::ClanEventType*> R get_Scout() {
		return ((R (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686874))(this);
	}
	template <typename R = void> R set_Scout(ProtoModels::ClanEventType* value) {
		return ((R (*)(ExtendClanInfoType*, ProtoModels::ClanEventType*))(Il2CppBase() + 0x168687C))(this, value);
	}
	template <typename R = ProtoModels::Can*> R get_CanCan() {
		return ((R (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686884))(this);
	}
	template <typename R = void> R set_CanCan(ProtoModels::Can* value) {
		return ((R (*)(ExtendClanInfoType*, ProtoModels::Can*))(Il2CppBase() + 0x168688C))(this, value);
	}
	 MapField2<Il2CppString*, int32_t>* get_LocationsGrade() {
		return ((MapField2<Il2CppString*, int32_t>* (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686894))(this);
	}
	template <typename R = int64_t> R get_RaidMatchingTimeout() {
		return ((R (*)(ExtendClanInfoType*))(Il2CppBase() + 0x168689C))(this);
	}
	template <typename R = void> R set_RaidMatchingTimeout(int64_t value) {
		return ((R (*)(ExtendClanInfoType*, int64_t))(Il2CppBase() + 0x16868A4))(this, value);
	}
	 MapField2<Il2CppString*, Il2CppString*>* get_ClanGameData() {
		return ((MapField2<Il2CppString*, Il2CppString*>* (*)(ExtendClanInfoType*))(Il2CppBase() + 0x16868AC))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ExtendClanInfoType*, Il2CppObject*))(Il2CppBase() + 0x16868B4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ExtendClanInfoType* other) {
		return ((R (*)(ExtendClanInfoType*, ProtoModels::ExtendClanInfoType*))(Il2CppBase() + 0x1686924))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686A90))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686BA0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ExtendClanInfoType*, uintptr_t))(Il2CppBase() + 0x1686C04))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ExtendClanInfoType*))(Il2CppBase() + 0x1686E74))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ExtendClanInfoType* other) {
		return ((R (*)(ExtendClanInfoType*, ProtoModels::ExtendClanInfoType*))(Il2CppBase() + 0x1687144))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ExtendClanInfoType*, uintptr_t))(Il2CppBase() + 0x1687360))(this, input);
	}

};

}
