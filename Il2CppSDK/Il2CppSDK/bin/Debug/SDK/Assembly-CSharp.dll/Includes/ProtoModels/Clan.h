#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Clan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Clan"));
	}

	 static MessageParser1ProtoModels::Clan*>*& _parser() {
		return *(MessageParser1ProtoModels::Clan*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PvpIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pvpID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LeaderUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& leaderUserID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& LockTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lockTime_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& LockTimeBuilderFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lockTimeBuilder_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& LockTimeDiplomacyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lockTimeDiplomacy_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& PlayersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::Player*>*& _repeated_players_codec() {
		return *(FieldCodec1ProtoModels::Player*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::Player*>*& players_() {
		return *(RepeatedField1ProtoModels::Player*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& CellsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::Cell*>*& _repeated_cells_codec() {
		return *(FieldCodec1ProtoModels::Cell*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1ProtoModels::Cell*>*& cells_() {
		return *(RepeatedField1ProtoModels::Cell*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& ShieldTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& shieldTime_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& StatueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClanEventType*> R& statue_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& ScoutFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClanEventType*> R& scout_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& CanCanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Can*> R& canCan_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& LocationsGradeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static CodecIl2CppString*, int32_t>*& _map_locationsGrade_codec() {
		return *(CodecIl2CppString*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 MapField2Il2CppString*, int32_t>*& locationsGrade_() {
		return *(MapField2Il2CppString*, int32_t>**)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> static R& ClanGameDataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static CodecIl2CppString*, Il2CppString*>*& _map_clanGameData_codec() {
		return *(CodecIl2CppString*, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 MapField2Il2CppString*, Il2CppString*>*& clanGameData_() {
		return *(MapField2Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x80);
	}

	 static MessageParser1ProtoModels::Clan*>* get_Parser() {
		return ((MessageParser1ProtoModels::Clan*>* (*)(void *))(Il2CppBase() + 0x1747D2C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1747D90))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x1747EB0))(this);
	}
	template <typename R = ProtoModels::Clan*> R Clone() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x1748270))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x17482CC))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(Clan*, int64_t))(Il2CppBase() + 0x17482D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x17482DC))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(Clan*, Il2CppString*))(Il2CppBase() + 0x17482E4))(this, value);
	}
	template <typename R = int64_t> R get_PvpID() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x1748364))(this);
	}
	template <typename R = void> R set_PvpID(int64_t value) {
		return ((R (*)(Clan*, int64_t))(Il2CppBase() + 0x174836C))(this, value);
	}
	template <typename R = int64_t> R get_LeaderUserID() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x1748374))(this);
	}
	template <typename R = void> R set_LeaderUserID(int64_t value) {
		return ((R (*)(Clan*, int64_t))(Il2CppBase() + 0x174837C))(this, value);
	}
	template <typename R = int64_t> R get_LockTime() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x1748384))(this);
	}
	template <typename R = void> R set_LockTime(int64_t value) {
		return ((R (*)(Clan*, int64_t))(Il2CppBase() + 0x174838C))(this, value);
	}
	template <typename R = int64_t> R get_LockTimeBuilder() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x1748394))(this);
	}
	template <typename R = void> R set_LockTimeBuilder(int64_t value) {
		return ((R (*)(Clan*, int64_t))(Il2CppBase() + 0x174839C))(this, value);
	}
	template <typename R = int64_t> R get_LockTimeDiplomacy() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x17483A4))(this);
	}
	template <typename R = void> R set_LockTimeDiplomacy(int64_t value) {
		return ((R (*)(Clan*, int64_t))(Il2CppBase() + 0x17483AC))(this, value);
	}
	 RepeatedField1ProtoModels::Player*>* get_Players() {
		return ((RepeatedField1ProtoModels::Player*>* (*)(Clan*))(Il2CppBase() + 0x17483B4))(this);
	}
	 RepeatedField1ProtoModels::Cell*>* get_Cells() {
		return ((RepeatedField1ProtoModels::Cell*>* (*)(Clan*))(Il2CppBase() + 0x17483BC))(this);
	}
	template <typename R = int64_t> R get_ShieldTime() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x17483C4))(this);
	}
	template <typename R = void> R set_ShieldTime(int64_t value) {
		return ((R (*)(Clan*, int64_t))(Il2CppBase() + 0x17483CC))(this, value);
	}
	template <typename R = ProtoModels::ClanEventType*> R get_Statue() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x17483D4))(this);
	}
	template <typename R = void> R set_Statue(ProtoModels::ClanEventType* value) {
		return ((R (*)(Clan*, ProtoModels::ClanEventType*))(Il2CppBase() + 0x17483DC))(this, value);
	}
	template <typename R = ProtoModels::ClanEventType*> R get_Scout() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x17483E4))(this);
	}
	template <typename R = void> R set_Scout(ProtoModels::ClanEventType* value) {
		return ((R (*)(Clan*, ProtoModels::ClanEventType*))(Il2CppBase() + 0x17483EC))(this, value);
	}
	template <typename R = ProtoModels::Can*> R get_CanCan() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x17483F4))(this);
	}
	template <typename R = void> R set_CanCan(ProtoModels::Can* value) {
		return ((R (*)(Clan*, ProtoModels::Can*))(Il2CppBase() + 0x17483FC))(this, value);
	}
	 MapField2Il2CppString*, int32_t>* get_LocationsGrade() {
		return ((MapField2Il2CppString*, int32_t>* (*)(Clan*))(Il2CppBase() + 0x1748404))(this);
	}
	 MapField2Il2CppString*, Il2CppString*>* get_ClanGameData() {
		return ((MapField2Il2CppString*, Il2CppString*>* (*)(Clan*))(Il2CppBase() + 0x174840C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Clan*, Il2CppObject*))(Il2CppBase() + 0x1748414))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Clan* other) {
		return ((R (*)(Clan*, ProtoModels::Clan*))(Il2CppBase() + 0x1748484))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x1748654))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x174881C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Clan*, uintptr_t))(Il2CppBase() + 0x1748880))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Clan*))(Il2CppBase() + 0x1748BC4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Clan* other) {
		return ((R (*)(Clan*, ProtoModels::Clan*))(Il2CppBase() + 0x1748FD0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Clan*, uintptr_t))(Il2CppBase() + 0x1749240))(this, input);
	}

};

}
