#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailEntity"));
	}

	template <typename R = FromCyclicComponent*> static R& fromCyclicComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = CreationTimeComponent*> R get_creationTime() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4CC38))(this);
	}
	template <typename R = bool> R get_hasCreationTime() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4CCC0))(this);
	}
	template <typename R = void> R AddCreationTime(int64_t newValue) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4CCCC))(this, newValue);
	}
	template <typename R = void> R ReplaceCreationTime(int64_t newValue) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4CDD0))(this, newValue);
	}
	template <typename R = void> R RemoveCreationTime() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4CED4))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4CEE0))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4CF68))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(MailEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A4CF74))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(MailEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A4D09C))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4D1C4))(this);
	}
	template <typename R = DurabilityCoefComponent*> R get_durabilityCoef() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4D1D0))(this);
	}
	template <typename R = bool> R get_hasDurabilityCoef() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4D258))(this);
	}
	template <typename R = void> R AddDurabilityCoef(float newValue) {
		return ((R (*)(MailEntity*, float))(Il2CppBase() + 0x1A4D264))(this, newValue);
	}
	template <typename R = void> R ReplaceDurabilityCoef(float newValue) {
		return ((R (*)(MailEntity*, float))(Il2CppBase() + 0x1A4D368))(this, newValue);
	}
	template <typename R = void> R RemoveDurabilityCoef() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4D46C))(this);
	}
	template <typename R = EndTimeComponent*> R get_endTime() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4D478))(this);
	}
	template <typename R = bool> R get_hasEndTime() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4D500))(this);
	}
	template <typename R = void> R AddEndTime(int64_t newValue) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4D50C))(this, newValue);
	}
	template <typename R = void> R ReplaceEndTime(int64_t newValue) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4D610))(this, newValue);
	}
	template <typename R = void> R RemoveEndTime() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4D714))(this);
	}
	template <typename R = bool> R get_isFromCyclic() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4D720))(this);
	}
	template <typename R = void> R set_isFromCyclic(bool value) {
		return ((R (*)(MailEntity*, bool))(Il2CppBase() + 0x1A4D72C))(this, value);
	}
	template <typename R = GuildJoinResultComponent*> R get_guildJoinResult() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4D844))(this);
	}
	template <typename R = bool> R get_hasGuildJoinResult() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4D8CC))(this);
	}
	template <typename R = void> R AddGuildJoinResult(int64_t newGuildId, bool newAccepted) {
		return ((R (*)(MailEntity*, int64_t, bool))(Il2CppBase() + 0x1A4D8D8))(this, newGuildId, newAccepted);
	}
	template <typename R = void> R ReplaceGuildJoinResult(int64_t newGuildId, bool newAccepted) {
		return ((R (*)(MailEntity*, int64_t, bool))(Il2CppBase() + 0x1A4D9E8))(this, newGuildId, newAccepted);
	}
	template <typename R = void> R RemoveGuildJoinResult() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4DAF8))(this);
	}
	template <typename R = MessageIdComponent*> R get_messageId() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4DB04))(this);
	}
	template <typename R = bool> R get_hasMessageId() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4DB8C))(this);
	}
	template <typename R = void> R AddMessageId(int64_t newId) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4CB34))(this, newId);
	}
	template <typename R = void> R ReplaceMessageId(int64_t newId) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4DB98))(this, newId);
	}
	template <typename R = void> R RemoveMessageId() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4DC9C))(this);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4DCA8))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4DD30))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4DD3C))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4DE40))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4DF44))(this);
	}
	template <typename R = SenderComponent*> R get_sender() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4DF50))(this);
	}
	template <typename R = bool> R get_hasSender() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4DFD8))(this);
	}
	template <typename R = void> R AddSender(int64_t newId) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4DFE4))(this, newId);
	}
	template <typename R = void> R ReplaceSender(int64_t newId) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4E0E8))(this, newId);
	}
	template <typename R = void> R RemoveSender() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4E1EC))(this);
	}
	template <typename R = StackComponent*> R get_stack() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4E1F8))(this);
	}
	template <typename R = bool> R get_hasStack() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4E280))(this);
	}
	template <typename R = void> R AddStack(Il2CppString* newResource, int32_t newCount, Nullable1int64_t>* newSignature) {
		return ((R (*)(MailEntity*, Il2CppString*, int32_t, Nullable1int64_t>*))(Il2CppBase() + 0x1A4E28C))(this, newResource, newCount, newSignature);
	}
	template <typename R = void> R ReplaceStack(Il2CppString* newResource, int32_t newCount, Nullable1int64_t>* newSignature) {
		return ((R (*)(MailEntity*, Il2CppString*, int32_t, Nullable1int64_t>*))(Il2CppBase() + 0x1A4E3BC))(this, newResource, newCount, newSignature);
	}
	template <typename R = void> R RemoveStack() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4E4EC))(this);
	}
	template <typename R = SupportMessageComponent*> R get_supportMessage() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4E4F8))(this);
	}
	template <typename R = bool> R get_hasSupportMessage() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4E580))(this);
	}
	template <typename R = void> R AddSupportMessage(int32_t newValue) {
		return ((R (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4E58C))(this, newValue);
	}
	template <typename R = void> R ReplaceSupportMessage(int32_t newValue) {
		return ((R (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4E690))(this, newValue);
	}
	template <typename R = void> R RemoveSupportMessage() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4E794))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4E7A0))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4E828))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MailEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A4E834))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MailEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A4E948))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4EA5C))(this);
	}
	template <typename R = TournamentComponent*> R get_tournament() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4EA68))(this);
	}
	template <typename R = bool> R get_hasTournament() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4EAF0))(this);
	}
	template <typename R = void> R AddTournament(int64_t newId) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4EAFC))(this, newId);
	}
	template <typename R = void> R ReplaceTournament(int64_t newId) {
		return ((R (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4EC00))(this, newId);
	}
	template <typename R = void> R RemoveTournament() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4ED04))(this);
	}
	template <typename R = TournamentPointsComponent*> R get_tournamentPoints() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4ED10))(this);
	}
	template <typename R = bool> R get_hasTournamentPoints() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4ED98))(this);
	}
	template <typename R = void> R AddTournamentPoints(int32_t newCount) {
		return ((R (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4EDA4))(this, newCount);
	}
	template <typename R = void> R ReplaceTournamentPoints(int32_t newCount) {
		return ((R (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4EEA8))(this, newCount);
	}
	template <typename R = void> R RemoveTournamentPoints() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4EFAC))(this);
	}
	template <typename R = TournamentPositionComponent*> R get_tournamentPosition() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4EFB8))(this);
	}
	template <typename R = bool> R get_hasTournamentPosition() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4F040))(this);
	}
	template <typename R = void> R AddTournamentPosition(int32_t newValue) {
		return ((R (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4F04C))(this, newValue);
	}
	template <typename R = void> R ReplaceTournamentPosition(int32_t newValue) {
		return ((R (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4F150))(this, newValue);
	}
	template <typename R = void> R RemoveTournamentPosition() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4F254))(this);
	}
	template <typename R = WindowDataComponent*> R get_windowData() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4F260))(this);
	}
	template <typename R = bool> R get_hasWindowData() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4F2E8))(this);
	}
	template <typename R = void> R AddWindowData(Il2CppString* newValue) {
		return ((R (*)(MailEntity*, Il2CppString*))(Il2CppBase() + 0x1A4F2F4))(this, newValue);
	}
	template <typename R = void> R ReplaceWindowData(Il2CppString* newValue) {
		return ((R (*)(MailEntity*, Il2CppString*))(Il2CppBase() + 0x1A4F408))(this, newValue);
	}
	template <typename R = void> R RemoveWindowData() {
		return ((R (*)(MailEntity*))(Il2CppBase() + 0x1A4F51C))(this);
	}

};

