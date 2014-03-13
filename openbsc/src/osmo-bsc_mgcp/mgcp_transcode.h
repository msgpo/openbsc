/*
 * (C) 2014 by On-Waves
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef OPENBSC_MGCP_TRANSCODE_H
#define OPENBSC_MGCP_TRANSCODE_H

int mgcp_transcoding_setup(struct mgcp_endpoint *endp,
			   struct mgcp_rtp_end *dst_end,
			   struct mgcp_rtp_end *src_end);

void mgcp_transcoding_net_downlink_format(struct mgcp_endpoint *endp,
					  int *payload_type,
					  const char**audio_name,
					  const char**fmtp_extra);

int mgcp_transcoding_process_rtp(struct mgcp_endpoint *endp,
				 struct mgcp_rtp_end *dst_end,
				 char *data, int *len, int buf_size);
#endif /* OPENBSC_MGCP_TRANSCODE_H */
