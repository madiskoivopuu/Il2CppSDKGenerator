#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Clan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Clan"));
	}

	template <typename T = MessageParser1Clan*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PvpIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pvpID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LeaderUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& leaderUserID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& LockTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lockTime_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& LockTimeBuilderFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lockTimeBuilder_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& LockTimeDiplomacyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lockTimeDiplomacy_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& PlayersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Player*>*> static T& _repeated_players_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Player*>*> T& players_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& CellsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Cell*>*> static T& _repeated_cells_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1Cell*>*> T& cells_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& ShieldTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& shieldTime_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& StatueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ClanEventType*> T& statue_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& ScoutFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ClanEventType*> T& scout_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& CanCanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Can*> T& canCan_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& LocationsGradeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CodecIl2CppString*, int32_t>*> static T& _map_locationsGrade_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = MapField2Il2CppString*, int32_t>*> T& locationsGrade_() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& ClanGameDataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CodecIl2CppString*, Il2CppString*>*> static T& _map_clanGameData_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = MapField2Il2CppString*, Il2CppString*>*> T& clanGameData_() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = MessageParser1Clan*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1747D2C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1747D90))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x1747EB0))(this);
	}
	template <typename T = Clan*> T Clone() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x1748270))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x17482CC))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(Clan*, int64_t))(Il2CppBase() + 0x17482D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x17482DC))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(Clan*, Il2CppString*))(Il2CppBase() + 0x17482E4))(this, value);
	}
	template <typename T = int64_t> T get_PvpID() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x1748364))(this);
	}
	template <typename T = void> T set_PvpID(int64_t value) {
		return ((T (*)(Clan*, int64_t))(Il2CppBase() + 0x174836C))(this, value);
	}
	template <typename T = int64_t> T get_LeaderUserID() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x1748374))(this);
	}
	template <typename T = void> T set_LeaderUserID(int64_t value) {
		return ((T (*)(Clan*, int64_t))(Il2CppBase() + 0x174837C))(this, value);
	}
	template <typename T = int64_t> T get_LockTime() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x1748384))(this);
	}
	template <typename T = void> T set_LockTime(int64_t value) {
		return ((T (*)(Clan*, int64_t))(Il2CppBase() + 0x174838C))(this, value);
	}
	template <typename T = int64_t> T get_LockTimeBuilder() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x1748394))(this);
	}
	template <typename T = void> T set_LockTimeBuilder(int64_t value) {
		return ((T (*)(Clan*, int64_t))(Il2CppBase() + 0x174839C))(this, value);
	}
	template <typename T = int64_t> T get_LockTimeDiplomacy() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x17483A4))(this);
	}
	template <typename T = void> T set_LockTimeDiplomacy(int64_t value) {
		return ((T (*)(Clan*, int64_t))(Il2CppBase() + 0x17483AC))(this, value);
	}
	template <typename T = RepeatedField1Player*>*> T get_Players() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x17483B4))(this);
	}
	template <typename T = RepeatedField1Cell*>*> T get_Cells() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x17483BC))(this);
	}
	template <typename T = int64_t> T get_ShieldTime() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x17483C4))(this);
	}
	template <typename T = void> T set_ShieldTime(int64_t value) {
		return ((T (*)(Clan*, int64_t))(Il2CppBase() + 0x17483CC))(this, value);
	}
	template <typename T = ClanEventType*> T get_Statue() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x17483D4))(this);
	}
	template <typename T = void> T set_Statue(ClanEventType* value) {
		return ((T (*)(Clan*, ClanEventType*))(Il2CppBase() + 0x17483DC))(this, value);
	}
	template <typename T = ClanEventType*> T get_Scout() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x17483E4))(this);
	}
	template <typename T = void> T set_Scout(ClanEventType* value) {
		return ((T (*)(Clan*, ClanEventType*))(Il2CppBase() + 0x17483EC))(this, value);
	}
	template <typename T = Can*> T get_CanCan() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x17483F4))(this);
	}
	template <typename T = void> T set_CanCan(Can* value) {
		return ((T (*)(Clan*, Can*))(Il2CppBase() + 0x17483FC))(this, value);
	}
	template <typename T = MapField2Il2CppString*, int32_t>*> T get_LocationsGrade() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x1748404))(this);
	}
	template <typename T = MapField2Il2CppString*, Il2CppString*>*> T get_ClanGameData() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x174840C))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(Clan*, Il2CppObject*))(Il2CppBase() + 0x1748414))(this, other);
	}
	template <typename T = bool> T Equals_1(Clan* other) {
		return ((T (*)(Clan*, Clan*))(Il2CppBase() + 0x1748484))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x1748654))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x174881C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Clan*, uintptr_t))(Il2CppBase() + 0x1748880))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Clan*))(Il2CppBase() + 0x1748BC4))(this);
	}
	template <typename T = void> T MergeFrom(Clan* other) {
		return ((T (*)(Clan*, Clan*))(Il2CppBase() + 0x1748FD0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Clan*, uintptr_t))(Il2CppBase() + 0x1749240))(this, input);
	}

};

}
